@class NSString;

@interface KVProfileReaderFactory : NSObject <KVProfileReaderProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)profileReaderForData:(id)a0 error:(id *)a1;

@end
