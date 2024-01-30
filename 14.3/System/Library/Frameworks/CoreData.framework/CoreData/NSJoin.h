@class NSString;

@interface NSJoin : NSObject <NSCoding, NSCopying> {
    NSString *_sourceAttributeName;
    NSString *_destinationAttributeName;
}

+ (id)joinWithSourceAttributeName:(id)a0 destinationAttributeName:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSourceAttributeName:(id)a0 destinationAttributeName:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
