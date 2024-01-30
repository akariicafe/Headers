@class NSString;

@interface PMLPlistClassWrapper : NSObject {
    NSString *_classNameKey;
}

- (void).cxx_destruct;
- (id)initWithClassNameKey:(id)a0;
- (id)readObjectWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)writeToPlistWithObject:(id)a0 andChunks:(id)a1;
- (id)readObjectWithData:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)writeToDataWithObject:(id)a0 andChunks:(id)a1;

@end
