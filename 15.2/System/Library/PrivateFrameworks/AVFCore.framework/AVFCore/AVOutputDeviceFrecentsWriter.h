@class NSString, NSMutableDictionary;

@interface AVOutputDeviceFrecentsWriter : NSObject <AVOutputDeviceFrecentsWriting> {
    NSString *_frecentsFilePath;
    NSMutableDictionary *_frecents;
}

@property (readonly, nonatomic) long long numberOfKeysToBeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrecencyInfo:(id)a0 forDeviceID:(id)a1;
- (void)removeFrecencyInfoForDeviceID:(id)a0;
- (BOOL)persistToDiskReturningError:(id *)a0;
- (id)initWithFrecentsFilePath:(id)a0;
- (id)init;
- (void)dealloc;

@end
