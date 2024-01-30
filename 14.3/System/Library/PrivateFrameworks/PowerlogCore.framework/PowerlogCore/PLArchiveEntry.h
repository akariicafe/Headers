@class NSString, NSDate;

@interface PLArchiveEntry : PLEntry

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *compressedPath;
@property (readonly, nonatomic) NSString *crPath;
@property (readonly, nonatomic) NSString *name;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSString *uuid;
@property (nonatomic) double systemTimeOffset;
@property (readonly) BOOL systemTimeOffsetModified;
@property (readonly) BOOL fullMode;
@property (nonatomic) long long stage;
@property (nonatomic) unsigned long long numAttempts;
@property (retain, nonatomic) NSDate *syncedOffDate;
@property (retain, nonatomic) NSDate *removedDate;
@property (nonatomic) long long mainDBSizeAtStart;
@property (readonly, nonatomic) BOOL syncedOff;
@property (readonly, nonatomic) BOOL removed;

+ (void)load;
+ (id)entryKey;
+ (id)storageQueue;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (void)log;
- (id)initEntryWithRawData:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 andUUID:(id)a2;

@end
