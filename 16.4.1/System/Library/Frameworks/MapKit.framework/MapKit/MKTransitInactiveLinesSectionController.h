@class NSArray;
@protocol GEOTransitLine;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController {
    id<GEOTransitLine> _line;
}

@property (readonly, nonatomic) NSArray *inactiveLines;

- (id)init;
- (void).cxx_destruct;
- (void)_buildRows;
- (BOOL)_newStationCardUIEnabled;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;
- (id)initWithMapItem:(id)a0 system:(id)a1 line:(id)a2;

@end
