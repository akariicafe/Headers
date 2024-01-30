@class NSString;

@interface BCSDomainItemIdentifier : NSObject <BCSDomainItemIdentifying, NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierWithType:(long long)a0 domain:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 domain:(id)a1;

@end
