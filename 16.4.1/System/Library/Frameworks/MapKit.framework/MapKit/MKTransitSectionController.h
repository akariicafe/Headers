@class NSSet, MKTransitSectionPagingFilter, NSDate, MKMapItem;
@protocol GEOTransitSystem;

@interface MKTransitSectionController : NSObject {
    MKMapItem *_mapItem;
    NSSet *_linesToShow;
    unsigned long long _numberOfRows;
    unsigned long long _numberOfFilteredRows;
    BOOL _needsBuildRows;
}

@property (readonly, nonatomic) id<GEOTransitSystem> system;
@property (retain, nonatomic) NSDate *departureCutoffDate;
@property (retain, nonatomic) NSDate *expiredHighFrequencyCutoffDate;
@property (retain, nonatomic) NSSet *incidentEntitiesToExclude;
@property (readonly, nonatomic) unsigned long long numberOfFilteredLines;
@property (readonly, nonatomic) MKTransitSectionPagingFilter *_pagingFilter;

- (unsigned long long)numberOfRows;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasFilteredRows;
- (BOOL)_needsBuildRows;
- (void)_buildRows;
- (void)_setNeedsBuildRows;
- (BOOL)hasFilteredLines;
- (void)incrementPagingFilter;
- (id)initWithMapItem:(id)a0 system:(id)a1;
- (id)linesToShow;

@end
