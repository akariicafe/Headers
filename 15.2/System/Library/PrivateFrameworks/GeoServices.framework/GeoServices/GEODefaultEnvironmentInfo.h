@interface GEODefaultEnvironmentInfo : GEOEnvironmentInfo

- (BOOL)isActive;
- (id)init;
- (void)makeActive;
- (id)_manifestURLString;

@end
