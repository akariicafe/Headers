@class IDSURI;

@interface IDSHandle : NSObject

@property (readonly, nonatomic) IDSURI *URI;
@property (readonly, nonatomic) BOOL isUserVisible;
@property (readonly, nonatomic) long long validationStatus;

- (BOOL)isEqualToHandle:(id)a0;
- (void).cxx_destruct;
- (id)initWithURI:(id)a0 isUserVisible:(BOOL)a1 validationStatus:(long long)a2;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
