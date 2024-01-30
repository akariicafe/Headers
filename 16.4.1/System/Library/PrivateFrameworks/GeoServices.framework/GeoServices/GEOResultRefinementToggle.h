@class NSString, NSNumber, GEOPDResultRefinementMetadata;

@interface GEOResultRefinementToggle : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) GEOPDResultRefinementMetadata *metadata;
@property (readonly, nonatomic) unsigned long long toggleType;
@property (readonly, nonatomic) int evChargingConnectorType;
@property (readonly, nonatomic) NSNumber *selectionSequenceNumber;
@property (readonly, nonatomic) BOOL selectionFromView;
@property (readonly, nonatomic) NSString *refinementKey;
@property (readonly, nonatomic) BOOL showAsSelected;

- (void).cxx_destruct;
- (id)initWithResultRefinementToggle:(id)a0;
- (id)convertToGEOPDResultRefinementToggle;
- (id)initWithDisplayName:(id)a0 isSelected:(BOOL)a1 metadata:(id)a2 toggleType:(unsigned long long)a3 evChargingConnectorType:(int)a4 selectionSequenceNumber:(id)a5 selectionFromView:(BOOL)a6 refinementKey:(id)a7 showAsSelected:(BOOL)a8;

@end
