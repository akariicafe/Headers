@class NBObjCURLHasher;

@interface NBURLHasher : NSObject

@property (readonly, nonatomic) NBObjCURLHasher *hasher;

- (id)hashForURL:(id)a0 maxLength:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
