@class NSString, NSMutableArray;

@interface MCPayloadSection : NSObject

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSMutableArray *payloadInfos;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 payloadInfos:(id)a2;

@end
