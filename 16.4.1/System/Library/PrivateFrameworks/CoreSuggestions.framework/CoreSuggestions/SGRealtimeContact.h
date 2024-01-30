@class SGContact, NSString, SGExtractionInfo;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) int updatedFields;
@property (readonly, nonatomic) SGContact *contact;
@property (readonly, nonatomic) NSString *cnContactIdentifier;
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo;
@property (readonly, nonatomic) BOOL isHarvested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)realtimeContactForNewContact:(id)a0;
+ (id)realtimeContactForFields:(id)a0 updatedFields:(int)a1 addedToCuratedContact:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithState:(int)a0 updatedFields:(int)a1 contact:(id)a2 identifier:(id)a3;
- (BOOL)isEqualToRealtimeContact:(id)a0;
- (id)markedAsHarvested;
- (void)setCnContactIdentifier:(id)a0;
- (void)setExtractionInfo;

@end
