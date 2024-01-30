@class CTNetwork;

@interface CTNetworkSelectionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long selectionState;
@property (nonatomic) unsigned long long selectionMode;
@property (retain, nonatomic) CTNetwork *selection;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
