@class NSString, NSUUID, TPSRecordDataProvider, NSDate;

@interface TPSRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long privateCountID;
@property (retain, nonatomic) NSString *pluginID;
@property (retain, nonatomic) NSString *task;
@property (retain, nonatomic) NSUUID *recordUUID;
@property (nonatomic) unsigned long long recordCountID;
@property (retain, nonatomic) NSDate *date;
@property (weak, nonatomic) TPSRecordDataProvider *dataProvider;

- (id)recordData;
- (void)save;
- (void)encodeWithCoder:(id)a0;
- (void)unsave;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)recordInfo;
- (id)initWithDate:(id)a0 pluginID:(id)a1 task:(id)a2;
- (id)recordDescription;
- (unsigned long long)getRecordCount;

@end
