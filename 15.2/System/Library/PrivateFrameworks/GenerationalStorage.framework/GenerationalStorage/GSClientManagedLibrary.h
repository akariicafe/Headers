@class NSString, GSTemporaryStorage, NSObject;
@protocol GSAdditionStoring;

@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol> {
    GSTemporaryStorage *_ts;
}

@property (readonly, nonatomic) NSObject<GSAdditionStoring> *storage;
@property (readonly, nonatomic) NSString *nameSpace;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)generationsRemove:(id)a0 error:(id *)a1;

@end
