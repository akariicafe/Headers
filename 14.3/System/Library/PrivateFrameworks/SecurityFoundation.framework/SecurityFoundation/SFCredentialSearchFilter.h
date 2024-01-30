@class NSArray, NSPredicate, NSDate;
@protocol _SFServiceIdentifier;

@interface SFCredentialSearchFilter : NSObject <NSCopying, NSSecureCoding> {
    id _credentialSearchFilterInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *minimumCreationDate;
@property (retain, nonatomic) NSDate *maximumCreationDate;
@property (retain, nonatomic) NSDate *minimumModificationDate;
@property (retain, nonatomic) NSDate *maximumModificationDate;
@property (retain, nonatomic) NSArray<_SFServiceIdentifier> *serviceIdentifiers;
@property (retain, nonatomic) NSArray *usernames;
@property (retain, nonatomic) NSPredicate *attributesPredicate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
