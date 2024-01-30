@class _PSZKWFTFallbackInteractionsConfig, _PSZKWFTUnstructuredCalendarConfig, _PSZKWFTUnstructuredRemindersConfig, _PSZKWFTPrimaryInteractionsConfig, _PSZKWFTCalendarEventConfig;

@interface _PSFTZKWConfig : NSObject

@property (readonly, nonatomic) BOOL useBlendingLayer;
@property (readonly, copy, nonatomic) _PSZKWFTCalendarEventConfig *calendarEventConfig;
@property (readonly, copy, nonatomic) _PSZKWFTUnstructuredCalendarConfig *unstructuredCalendarConfig;
@property (readonly, copy, nonatomic) _PSZKWFTUnstructuredRemindersConfig *unstructuredRemindersConfig;
@property (readonly, copy, nonatomic) _PSZKWFTPrimaryInteractionsConfig *faceTimeInteractionsConfig;
@property (readonly, copy, nonatomic) _PSZKWFTFallbackInteractionsConfig *fallbackInteractionsConfig;

+ (BOOL)onNonUIBuild;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTrialData:(id)a0;

@end
