@class NSUUID, SDSuggestionNode, NSString;

@interface UIAirDropNode : NSObject <NSSecureCoding, SHSheetLoadableProxy> {
    _Atomic unsigned int _imageSlotID;
    _Atomic unsigned int _transportSlotID;
    _Atomic unsigned int _mainLabelSlotID;
    _Atomic unsigned int _bottomLabelSlotID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPeopleSuggestion) BOOL peopleSuggestion;
@property (retain, nonatomic) SDSuggestionNode *suggestionNode;
@property (retain, nonatomic) NSUUID *nodeIdentifier;
@property (nonatomic) BOOL wantsTwoLines;
@property (nonatomic) BOOL hasSquareImage;
@property (nonatomic) BOOL magicHead;
@property (nonatomic) long long selectionReason;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isRestricted) BOOL restricted;
@property unsigned int imageSlotID;
@property unsigned int transportSlotID;
@property unsigned int mainLabelSlotID;
@property unsigned int bottomLabelSlotID;
@property (copy, nonatomic) id /* block */ loadHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithSuggestionNode:(id)a0;
+ (id)nodeWithImageSlotID:(unsigned int)a0 labelSlotID:(unsigned int)a1 transportSlotID:(unsigned int)a2 isPeopleSuggestion:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)load;

@end
