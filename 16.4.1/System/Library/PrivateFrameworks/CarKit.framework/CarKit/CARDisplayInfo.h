@class NSString, NSArray, NSSet;

@interface CARDisplayInfo : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } physicalSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) BOOL supportsCarPlayContent;
@property (readonly, nonatomic) BOOL supportsInstrumentClusterContent;
@property (readonly, nonatomic) BOOL supportsMapContent;
@property (readonly, nonatomic) NSArray *oemPunchThroughs;
@property (readonly, nonatomic) NSArray *streams;
@property (readonly, nonatomic) NSSet *punchThroughIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (void)_updateOEMViews:(id)a0;
- (BOOL)hasPunchThroughWithIdentifier:(id)a0;
- (id)initWithLogicalScreenDictionary:(id)a0;
- (id)initWithPhysicalScreenDictionary:(id)a0;
- (struct CGPoint { double x0; double x1; })originForScreenInfoIdentifier:(id)a0;
- (id)punchThroughWithIdentifier:(id)a0;
- (void)updateStreams:(id)a0;

@end
