@class NSString;

@interface KVProfileWriterFactory : NSObject <KVProfileWriterProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)profileWriterForFormat:(unsigned char)a0 outputStream:(id)a1 error:(id *)a2;

@end
