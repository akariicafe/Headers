@class NSCountedSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NUFontManager : NSObject <NUFontRegistration>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registrationQueue;
@property (readonly, nonatomic) NSCountedSet *referenceCounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)registerFontWithURL:(id)a0 error:(id *)a1;
- (void)unregisterFontWithURL:(id)a0;
- (void)decreaseReferenceCountForFontWithURL:(id)a0;
- (void)increaseReferenceCountForFontWithURL:(id)a0;
- (unsigned long long)referenceCountForFontWithURL:(id)a0;
- (BOOL)shouldUnregisterFontWithURL:(id)a0;
- (BOOL)unregisterFontAtURL:(id)a0 error:(id *)a1;

@end
