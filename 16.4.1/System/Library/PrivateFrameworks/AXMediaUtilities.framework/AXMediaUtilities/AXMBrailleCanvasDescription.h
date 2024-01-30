@interface AXMBrailleCanvasDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long numberOfDiscretePinHeights;
@property (nonatomic) BOOL hasConsistentHorizontalPinSpacing;
@property (nonatomic) BOOL hasConsistentVerticalPinSpacing;
@property (nonatomic) double verticalPinSpacing;
@property (nonatomic) double horizontalPinSpacing;
@property (nonatomic) double interCellHorizontalSpacing;
@property (nonatomic) double interCellVerticalSpacing;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithHeight:(unsigned long long)a0 width:(unsigned long long)a1 numberOfDiscretePinHeights:(unsigned long long)a2;

@end
