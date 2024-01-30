@class NSString, NSTimeZone;

@interface _TempTokenTimestampValue : NSObject <GEOServerFormatTokenTimeStampValue>

@property (nonatomic) double timeStamp;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSString *formatPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
