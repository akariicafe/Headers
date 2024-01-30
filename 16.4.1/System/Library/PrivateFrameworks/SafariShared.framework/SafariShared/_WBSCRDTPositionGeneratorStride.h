@class NSArray, WBSCRDTPosition;

@interface _WBSCRDTPositionGeneratorStride : NSObject

@property (readonly, copy, nonatomic) NSArray *recordNames;
@property (readonly, copy, nonatomic) WBSCRDTPosition *beforePosition;
@property (readonly, copy, nonatomic) WBSCRDTPosition *afterPosition;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordNames:(id)a0 beforePosition:(id)a1 afterPosition:(id)a2;

@end
