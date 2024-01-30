@class NSString, NSURL;

@interface PLSharedAssetsContainerIncrementalChangeHighlightContainerChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *relationshipKey;
@property (retain, nonatomic) NSURL *sourceHighlightURI;
@property (retain, nonatomic) NSURL *destinationHighlightURI;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
