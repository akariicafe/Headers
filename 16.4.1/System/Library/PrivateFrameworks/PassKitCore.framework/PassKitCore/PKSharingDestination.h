@class NSString;

@interface PKSharingDestination : NSObject <NSSecureCoding, NSCopying> {
    NSString *_destinationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_name;
- (id)idsDestination;
- (id)initWithDestinationIdentifier:(id)a0;

@end
