@class NSString;

@interface PKSharingDestination : NSObject <NSSecureCoding, NSCopying> {
    NSString *_destinationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_name;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)idsDestination;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDestinationIdentifier:(id)a0;

@end
