@class NSNumber, NSArray, CHTextCorrectionResult;

@interface CHTextInputQueryItem : NSObject

@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (readonly, nonatomic) NSNumber *itemStableIdentifier;
@property (readonly, copy, nonatomic) NSArray *strokeIdentifiers;
@property (readonly, nonatomic) CHTextCorrectionResult *correctionResult;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 stableIdentifier:(id)a1 strokeIdentifiers:(id)a2 correctionResult:(id)a3;
- (BOOL)isEqualToTextInputQueryItem:(id)a0;

@end
