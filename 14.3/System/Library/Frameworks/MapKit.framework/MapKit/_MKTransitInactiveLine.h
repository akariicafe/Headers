@class NSString, NSTimeZone, NSDate;
@protocol GEOTransitLine;

@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine> {
    id<GEOTransitLine> _line;
    BOOL _blocked;
    NSDate *_serviceResumesDate;
    NSTimeZone *_timeZone;
    NSDate *_referenceDate;
}

@property (readonly, nonatomic) id<GEOTransitLine> line;
@property (readonly, nonatomic) NSString *serviceResumesDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransitLine:(id)a0 blocked:(BOOL)a1 serviceResumesDate:(id)a2 timeZone:(id)a3 referenceDate:(id)a4;
- (void).cxx_destruct;

@end
