@interface GEODefaultEnvironmentInfo : GEOEnvironmentInfo

- (id)init;
- (void)makeActive;
- (id)_manifestURLString;
- (BOOL)isActive;

@end
