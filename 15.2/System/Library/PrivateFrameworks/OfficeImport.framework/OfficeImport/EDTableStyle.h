@class NSString, EDKeyedCollection;

@interface EDTableStyle : NSObject <NSCopying> {
    NSString *mName;
    EDKeyedCollection *mTableStyleElements;
}

+ (id)tableStyle;

- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)tableStyleElements;

@end
