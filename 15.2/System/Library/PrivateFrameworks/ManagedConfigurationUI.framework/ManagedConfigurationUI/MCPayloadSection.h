@class NSString, NSMutableArray;

@interface MCPayloadSection : NSObject

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSMutableArray *payloadInfos;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 payloadInfos:(id)a2;

@end
