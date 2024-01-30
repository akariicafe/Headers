@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying>

@property (nonatomic) unsigned long long savedHash;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) NSArray *arguments;

+ (id)requestIdentifierForInvocation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithInvocation:(id)a0;
- (id)_argumentsForInvocation:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
