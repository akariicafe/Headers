@class NSArray, NSIndexSet;

@interface _SlotDescriptor : NSObject

@property (readonly, nonatomic) NSArray *familiesRankedList;
@property (readonly, nonatomic) NSArray *typesRankedList;
@property (readonly, nonatomic) NSIndexSet *possibleTypes;

+ (id)descriptorWithComplicationFamilies:(id)a0 complicationTypesRankedList:(id)a1 allowedComplicationTypes:(id)a2;

- (BOOL)supportsType:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)allowsFamily:(long long)a0 inFace:(id)a1;
- (BOOL)supportsFamiliesOfComplications:(id)a0 inFace:(id)a1;
- (BOOL)allowsType:(unsigned long long)a0 inFace:(id)a1;
- (void)enumerateAllowedFamiliesForFace:(id)a0 withBlock:(id /* block */)a1;

@end
