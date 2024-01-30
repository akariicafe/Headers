@class NSString, NSData, NSDate, NSNumber;

@interface FCUserEventHistorySession : NSObject

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *sizeNumber;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long size;

+ (id)dateFromSessionID:(id)a0;

- (id)compressedData;
- (id)description;
- (id)initWithSessionID:(id)a0 path:(id)a1;
- (void).cxx_destruct;

@end
