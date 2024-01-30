@class NSURL;
@protocol CKKSPBCodable;

@interface CKKSPBFileStorage : NSObject

@property (retain) NSURL *storageFile;
@property (retain) Class storageClass;
@property (retain) id<CKKSPBCodable> protobufStorage;

- (void)setStorage:(id)a0;
- (void).cxx_destruct;
- (id)storage;
- (id)initWithStoragePath:(id)a0 storageClass:(Class)a1;

@end
