@class NSUUID, NSString, NSArray;

@interface CKInboxSection : NSObject

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (retain, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)initWithHeader:(id)a0 footer:(id)a1 items:(id)a2;

@end
