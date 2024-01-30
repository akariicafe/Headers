@class NSString, NSTimeZone;

@interface _TimeStampValue : NSObject <GEOServerFormatTokenTimeStampValue> {
    double _timeStamp;
    NSTimeZone *_timeZone;
    NSString *_formatPattern;
}

@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *formatPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
