@class NSNumber, NSUUID;

@interface UIAirDropNode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *imageSlot;
@property (retain) NSNumber *transportSlot;
@property (nonatomic, getter=isPeopleSuggestion) BOOL peopleSuggestion;
@property (retain) NSNumber *mainLabelSlot;
@property (retain) NSNumber *topLabelSlot;
@property (retain) NSNumber *bottomLabelSlot;
@property (retain) NSUUID *nodeIdentifier;
@property (nonatomic) BOOL wantsTwoLines;
@property (nonatomic) BOOL hasSquareImage;
@property (nonatomic) BOOL magicHead;
@property (nonatomic) long long selectionReason;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isRestricted) BOOL restricted;

+ (id)nodeWithImageSlot:(id)a0 labelSlot:(id)a1 transportSlot:(id)a2 isPeopleSuggestion:(BOOL)a3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
