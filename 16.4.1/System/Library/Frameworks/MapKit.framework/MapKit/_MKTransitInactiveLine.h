@class NSString, NSTimeZone, NSDate;
@protocol GEOTransitDepartureSequence, GEOTransitLine;

@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine> {
    id<GEOTransitLine> _line;
    BOOL _blocked;
    NSDate *_serviceResumesDate;
    NSTimeZone *_timeZone;
    NSDate *_referenceDate;
}

@property (readonly, nonatomic) id<GEOTransitLine> line;
@property (readonly, nonatomic) NSString *serviceResumesDescription;
@property (readonly, nonatomic) id<GEOTransitDepartureSequence> departuresSequence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTransitLine:(id)a0 blocked:(BOOL)a1 serviceResumesDate:(id)a2 timeZone:(id)a3 referenceDate:(id)a4 departuresSequence:(id)a5;

@end
