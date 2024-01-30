@class NSString, NSDate;

@interface IMSPIRecentEvent : NSObject

@property (retain) NSString *handle;
@property (retain) NSString *labelID;
@property (retain) NSDate *date;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHandle:(id)a0 date:(id)a1;
- (id)initWithLabelID:(id)a0 date:(id)a1;

@end
