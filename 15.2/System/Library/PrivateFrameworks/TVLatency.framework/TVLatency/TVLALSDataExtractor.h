@interface TVLALSDataExtractor : NSObject

- (unsigned int)_displayID;
- (void)extract:(unsigned long long)a0 ALSReadings:(id /* block */)a1;
- (void)extractALSData:(id /* block */)a0;
- (id)extractALSCalibrationData;

@end
