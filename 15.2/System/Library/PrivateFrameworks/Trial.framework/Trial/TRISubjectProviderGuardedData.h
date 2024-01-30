@class NSMutableDictionary, TRISubject, NSDate;

@interface TRISubjectProviderGuardedData : NSObject {
    TRISubject *subject;
    NSDate *nextRotationDate;
    NSMutableDictionary *tempDeviceIds;
}

- (void).cxx_destruct;

@end
