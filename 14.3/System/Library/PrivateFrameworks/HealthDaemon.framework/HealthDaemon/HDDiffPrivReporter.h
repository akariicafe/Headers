@class HDProfile, _DPStringRecorder, NSObject, _DPBitValueRecorder;
@protocol OS_dispatch_queue;

@interface HDDiffPrivReporter : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    _DPStringRecorder *_recorder;
    _DPBitValueRecorder *_randomBitRecorder;
}

+ (BOOL)isAvailable;
+ (id)reportableTypes;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)_typesInMonthWithDataForTypes:(id)a0 now:(id)a1 error:(id *)a2;
- (BOOL)_recordTypesUsedInPastMonth:(id)a0;
- (BOOL)_recordRandomBit;
- (BOOL)reportWithCurrentDate:(id)a0 error:(id *)a1;

@end
