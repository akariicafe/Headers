@class NSString, NSMutableArray;

@interface DMCProfilePayloadSection : NSObject

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSMutableArray *payloadViewModels;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 payloadViewModels:(id)a2;

@end
