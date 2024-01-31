@class NSString;

@interface NSJoin : NSObject <NSCoding, NSCopying> {
    NSString *_sourceAttributeName;
    NSString *_destinationAttributeName;
}

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceAttributeName:(id)a0 destinationAttributeName:(id)a1;

@end
