@class NUVideoAttributes, NSString;
@protocol NURenderStatistics;

@interface _NUVideoAttributesResult : _NURenderResult <NUVideoAttributesResult>

@property (retain, nonatomic) NUVideoAttributes *videoAttributes;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
