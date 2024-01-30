@class NSData;

@interface LogHead : GPBMessage

@property (nonatomic) unsigned long long logBeginningMs;
@property (nonatomic) unsigned long long logSize;
@property (copy, nonatomic) NSData *logHeadHash;
@property (nonatomic) unsigned long long revision;
@property (nonatomic) int logType;
@property (nonatomic) int application;
@property (nonatomic) unsigned long long treeId;
@property (nonatomic) unsigned long long timestampMs;

+ (id)descriptor;

@end
