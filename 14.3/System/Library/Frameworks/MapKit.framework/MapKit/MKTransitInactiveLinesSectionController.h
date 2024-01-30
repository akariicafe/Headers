@class NSArray;

@interface MKTransitInactiveLinesSectionController : MKTransitSectionController

@property (readonly, nonatomic) NSArray *inactiveLines;

- (id)init;
- (void).cxx_destruct;
- (void)_buildRows;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;

@end
