@class NSString, EDKeyedCollection;

@interface EDTableStyle : NSObject <NSCopying> {
    NSString *mName;
    EDKeyedCollection *mTableStyleElements;
}

+ (id)tableStyle;

- (void)setName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)name;
- (id)tableStyleElements;

@end
