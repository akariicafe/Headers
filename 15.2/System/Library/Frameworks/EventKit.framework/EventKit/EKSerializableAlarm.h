@class NSDate;

@interface EKSerializableAlarm : EKSerializableObject

@property (nonatomic) double relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (nonatomic) BOOL isAbsolute;

+ (id)classesForKey;

- (id)initWithAlarm:(id)a0;
- (id)createAlarm:(id *)a0;
- (void).cxx_destruct;

@end
