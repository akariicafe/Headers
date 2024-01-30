@class NSString;

@interface _CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)readingContactsData;
- (void)modifyingContactsData;
- (void)readAndTransmittingContactsData;

@end
