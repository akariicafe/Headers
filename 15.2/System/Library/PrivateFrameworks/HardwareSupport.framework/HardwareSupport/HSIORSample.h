@class HSIORChannelDescription, NSNumber, NSString;
@protocol HSIOReporting;

@interface HSIORSample : NSObject <HSIOSimpleReporting, NSCopying>

@property (retain, nonatomic) HSIORChannelDescription *channelDescription;
@property (retain, nonatomic) NSNumber *count;
@property (readonly, nonatomic) id<HSIOReporting> channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToSample:(id)a0;
- (id)initWithIOReportSampleRef:(struct __CFDictionary { } *)a0;

@end
